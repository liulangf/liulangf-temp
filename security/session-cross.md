session cors
============

CORS是一个W3C标准，全称是"跨域资源共享"（Cross-origin resource sharing）。它允许浏览器向跨源服务器，发出XMLHttpRequest请求，从而克服了AJAX只能同源使用的限制。


跨域是指一个域下的文档或脚本试图去请求另一个域下的资源，这里跨域是广义的。
我们通常所说的跨域是狭义的，是由浏览器同源策略限制的一类请求场景。

# SOP::Same origin policy

同源策略/SOP（Same origin policy）是一种约定，由Netscape公司1995年引入浏览器，它是浏览器最核心也最基本的安全功能，如果缺少了同源策略，浏览器很容易受到XSS、CSFR等攻击。所谓同源是指"协议+域名+端口"三者相同，即便两个不同的域名指向同一个ip地址，也非同源。

同源策略限制以下几种行为：

1.) Cookie、LocalStorage 和 IndexDB 无法读取
2.) DOM 和 Js对象无法获得
3.) AJAX 请求不能发送


# 跨域解决方案

1. 通过jsonp跨域
2. document.domain + iframe跨域
3. location.hash + iframe
4. window.name + iframe跨域
5. postMessage跨域
6. 跨域资源共享（CORS）
7. nginx代理跨域
8. nodejs中间件代理跨域
9. WebSocket协议跨域


# CORS 跨域资源共享

跨域资源共享标准新增了一组 HTTP 首部字段，允许服务器声明哪些源站有权限访问哪些资源。



# origin
The web origin concept:

+ Defined in RFC 6454, published 2011, by Adam Barth/Google
+ defined by matching:
	- schema
	- host
	- port


# resources
+ [cors](https://segmentfault.com/a/1190000015641760)
+ [ryf-cors](http://www.ruanyifeng.com/blog/2016/04/cors.html)