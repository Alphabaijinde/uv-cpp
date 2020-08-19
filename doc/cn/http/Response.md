# Request
Http 返回数据。
<br></br>
```C++
enum StatusCode
```
Http状态码。
*  OK =200 :客户端请求成功
*  BadRequest = 400 :客户端请求有语法错误，不能被服务器所理解
*  Unauthorized  = 401 : 请求未经授权，这个状态代码必须和WWW-Authenticate报头域一起使用 
*  Forbidden = 403  : 服务器收到请求，但是拒绝提供服务
*  NotFound = 404 : 请求资源不存在，eg：输入了错误的URL
*  InternalServerError = 500  : 服务器发生不可预期的错误
*  ServerUnavailable = 503 : 服务器当前不能处理客户端的请求，一段时间后可能恢复正常

<br></br>
```C++
Response()
```
构造函数
<br></br>
```C++
Response(HttpVersion version, StatusCode code)
```
构造函数
* HttpVersion version : Http协议版本。
*  StatusCode code : 状态码。
<br></br>
