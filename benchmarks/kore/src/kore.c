#include <kore/kore.h>
#include <kore/http.h>

int	page(struct http_request *);

int page(struct http_request *req) {
	http_response_header(req, "content-type", "text/html");
	http_response(req, 200, "Hello World!", 13);
	return (KORE_RESULT_OK);
}
