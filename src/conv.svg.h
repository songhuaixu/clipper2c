#pragma once
#include <../vendor/Clipper2/CPP/Utils/clipper.svg.h>
#include "clipper2c.svg.h"

ClipperSvgWriter *to_c(Clipper2Lib::SvgWriter *w);
ClipperSvgReader *to_c(Clipper2Lib::SvgReader *w);

Clipper2Lib::SvgWriter *from_c(ClipperSvgWriter *w);
Clipper2Lib::SvgReader *from_c(ClipperSvgReader *w);