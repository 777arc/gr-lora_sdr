/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually
 * edited  */
/* The following lines can be configured to regenerate this file during cmake */
/* If manual edits are made, the following tags should be modified accordingly.
 */
/* BINDTOOL_GEN_AUTOMATIC(0) */
/* BINDTOOL_USE_PYGCCXML(0) */
/* BINDTOOL_HEADER_FILE(payload_id_inc.h) */
/* BINDTOOL_HEADER_FILE_HASH(b71e8140c759338633d5d5412e5eedce) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lora_sdr/payload_id_inc.h>
// pydoc.h is automatically generated in the build directory
#include <payload_id_inc_pydoc.h>

void bind_payload_id_inc(py::module &m) {

  using payload_id_inc = ::gr::lora_sdr::payload_id_inc;

  py::class_<payload_id_inc, gr::sync_block, gr::block, gr::basic_block,
             std::shared_ptr<payload_id_inc>>(m, "payload_id_inc",
                                              D(payload_id_inc))

      .def(py::init(&payload_id_inc::make), py::arg("separator"),
           D(payload_id_inc, make))

      ;
}
