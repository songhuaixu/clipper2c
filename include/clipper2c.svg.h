#include <stddef.h>
#include <stdint.h>
#include "clipper2c.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ClipperSvgWriter ClipperSvgWriter;
typedef struct ClipperSvgReader ClipperSvgReader;

// SvgWriter

ClipperSvgWriter *clipper_svgwriter(void *mem, int precision);
ClipperFillRule clipper_svgwriter_fill_rule(ClipperSvgWriter *w);
void clipper_svgwriter_set_coords_style(ClipperSvgWriter *w,
                                        const char *font_name,
                                        uint32_t font_color,
                                        uint32_t font_size);
void clipper_svgwriter_add_text(ClipperSvgWriter *w, const char *text,
                                uint32_t font_color, uint32_t font_size, int x,
                                int y);
void clipper_svgwriter_add_path64(ClipperSvgWriter *w, ClipperPath64 *path,
                                  int is_open, ClipperFillRule fillrule,
                                  uint32_t brush_color, uint32_t pen_color,
                                  double pen_width, int show_coords);
void clipper_svgwriter_add_pathd(ClipperSvgWriter *w, ClipperPathD *path,
                                 int is_open, ClipperFillRule fillrule,
                                 uint32_t brush_color, uint32_t pen_color,
                                 double pen_width, int show_coords);
void clipper_svgwriter_add_paths64(ClipperSvgWriter *w, ClipperPaths64 *paths,
                                   int is_open, ClipperFillRule fillrule,
                                   uint32_t brush_color, uint32_t pen_color,
                                   double pen_width, int show_coords);
void clipper_svgwriter_add_pathsd(ClipperSvgWriter *w, ClipperPathsD *paths,
                                  int is_open, ClipperFillRule fillrule,
                                  uint32_t brush_color, uint32_t pen_color,
                                  double pen_width, int show_coords);
int clipper_svgwriter_save_to_file(ClipperSvgWriter *w, const char *filename,
                                   int max_width, int max_height, int margin);
void clipper_svgwriter_clear(ClipperSvgWriter *w);

// SvgReader

ClipperSvgReader *clipper_svgreader(void *mem);
void clipper_svgreader_load_from_file(ClipperSvgReader *r,
                                      const char *filename);
void clipper_svgreader_clear(ClipperSvgReader *r);
ClipperPathsD *clipper_svgreader_get_pathsd(void *mem, ClipperSvgReader *r);

// memory size
size_t clipper_svgwriter_size();
size_t clipper_svgreader_size();

// destruction
void clipper_destruct_svgwriter(ClipperSvgWriter *p);
void clipper_destruct_svgreader(ClipperSvgReader *p);

// pointer free + destruction
void clipper_delete_svgwriter(ClipperSvgWriter *p);
void clipper_delete_svgreader(ClipperSvgReader *p);

#ifdef __cplusplus
}
#endif