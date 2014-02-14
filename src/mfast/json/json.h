#ifndef JSON_H_H4Q7QTC4
#define JSON_H_H4Q7QTC4

#include "mfast_json_export.h"
#include "mfast.h"
#include <iostream>

namespace mfast
{
  namespace json {

    MFAST_JSON_EXPORT bool encode(std::ostream&                  os,
                                  const ::mfast::aggregate_cref& msg,
                                  unsigned json_object_tag_mask=0);
    MFAST_JSON_EXPORT bool encode(std::istream&                 is,
                                  const ::mfast::sequence_mref& seq,
                                  unsigned json_object_tag_mask=0);
    MFAST_JSON_EXPORT bool decode(std::istream&                  is,
                                  const ::mfast::aggregate_mref& msg,
                                  unsigned json_object_tag_mask=0);
    MFAST_JSON_EXPORT bool decode(std::istream&                 is,
                                  const ::mfast::sequence_mref& seq,
                                  unsigned json_object_tag_mask=0);
  } // namespace json
} // namespace mfast

#endif /* end of include guard: JSON_H_H4Q7QTC4 */
