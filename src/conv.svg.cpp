#include "conv.svg.h"

ClipperSvgWriter *to_c(Clipper2Lib::SvgWriter *p) {
  return reinterpret_cast<ClipperSvgWriter *>(p);
}

ClipperSvgReader *to_c(Clipper2Lib::SvgReader *p) {
  return reinterpret_cast<ClipperSvgReader *>(p);
}

Clipper2Lib::SvgWriter *from_c(ClipperSvgWriter *p) {
  return reinterpret_cast<Clipper2Lib::SvgWriter *>(p);
}

Clipper2Lib::SvgReader *from_c(ClipperSvgReader *p) {
  return reinterpret_cast<Clipper2Lib::SvgReader *>(p);
}