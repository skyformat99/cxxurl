/**
 * @author : xiaozhuai
 * @date   : 17/1/3
 */

#include "RequestBuilder.h"

namespace CXXUrl {

RequestBuilder::RequestBuilder() {

}

RequestBuilder::~RequestBuilder() {

}

RequestBuilder& RequestBuilder::url(string url) {
    request.setUrl(url);
    return *this;
}

RequestBuilder& RequestBuilder::followLocation(bool followLocation) {
    request.setFollowLocation(followLocation);
    return *this;
}

RequestBuilder& RequestBuilder::form(Form *form) {
    request.setForm(form);
    return *this;
}

RequestBuilder& RequestBuilder::contentOutput(ostream *stream) {
    request.setContentOutput(stream);
    return *this;
}

RequestBuilder& RequestBuilder::headerOutput(ostream *stream) {
    request.setHeaderOutput(stream);
    return *this;
}

RequestBuilder& RequestBuilder::maxRedirs(int maxRedirs) {
    request.setMaxRedirs(maxRedirs);
    return *this;
}

RequestBuilder& RequestBuilder::userAgent(string userAgent) {
    request.setUserAgent(userAgent);
    return *this;
}

RequestBuilder& RequestBuilder::referer(string referer) {
    request.setReferer(referer);
    return *this;
}

RequestBuilder& RequestBuilder::header(Header *header) {
    request.setHeader(header);
    return *this;
}

RequestBuilder& RequestBuilder::timeout(long milliSeconds) {
    request.setTimeout(milliSeconds);
    return *this;
}

RequestBuilder& RequestBuilder::proxy(string proxy) {
    request.setProxy(proxy);
    return *this;
}

RequestBuilder& RequestBuilder::importCookie(string filePath) {
    request.setCookieImportFile(filePath);
    return *this;
}

RequestBuilder& RequestBuilder::exportCookie(string filePath) {
    request.setCookieExportFile(filePath);
    return *this;
}

RequestBuilder& RequestBuilder::verifySSL(bool enable) {
    request.setVerifySSL(enable);
    return *this;
}

RequestBuilder& RequestBuilder::cacert(string pemFile) {
    request.setCacert(pemFile);
    return *this;
}

RequestBuilder& RequestBuilder::noBody(bool noBody) {
    request.setNoBody(noBody);
    return *this;
}

RequestBuilder& RequestBuilder::verbose(bool enable) {
    request.setVerbose(enable);
    return *this;
}

RequestBuilder& RequestBuilder::setCurlOptionLong(CURLoption option, long value) {
    request.setCurlOptionLong(option, value);
    return *this;
}

RequestBuilder& RequestBuilder::setCurlOptionString(CURLoption option, string value) {
    request.setCurlOptionString(option, value);
    return *this;
}

Request& RequestBuilder::build() {
    return request;
}

}