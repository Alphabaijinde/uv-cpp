#include "Timer.h"

using namespace uv;

Timer::Timer(uv_loop_t* loop,uint64_t timeout,uint64_t repeat,TimerCallback callback)
    :loop(loop),
    timeout(timeout),
    repeat(repeat),
    timerCallback(callback)
{
    handle.data = (void*)this;
    ::uv_timer_init(loop, &handle);
}

void Timer::start()
{
    ::uv_timer_start(&handle, Timer::timerProcess,timeout, repeat);
}

TimerCallback Timer::getTimerCallback()
{
    return timerCallback;
}

void Timer::timerProcess(uv_timer_t* handle)
{
    auto ptr = (Timer*)(handle->data);
    auto callback = ptr->getTimerCallback();
    if(callback)
    {
        callback();
    }
}
