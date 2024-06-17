#include <clipper2c.svg.h>
#include "conv.svg.h"

#ifdef __cplusplus
extern "C" {
#endif

// memory size
size_t clipper_svgwriter_size() { return sizeof(SvgWriter); }
size_t clipper_svgreader_size() { return sizeof(SvgReader); }

// destruction
void clipper_destruct_svgwriter(ClipperSvgWriter *p) {
  from_c(p)->~SvgWriter();
}
void clipper_destruct_svgreader(ClipperSvgReader *p) {
  from_c(p)->~SvgReader();
}

// pointer free + destruction
void clipper_delete_svgwriter(ClipperSvgWriter *p) { delete from_c(p); }
void clipper_delete_svgreader(ClipperSvgReader *p) { delete from_c(p); }

#ifdef __cplusplus
}
#endif