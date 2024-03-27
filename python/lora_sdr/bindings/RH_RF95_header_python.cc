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
/* BINDTOOL_HEADER_FILE(RH_RF95_header.h) */
/* BINDTOOL_HEADER_FILE_HASH(23853c760a34c4b65100ef57957723ca) */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lora_sdr/RH_RF95_header.h>
// pydoc.h is automatically generated in the build directory
#include <RH_RF95_header_pydoc.h>

void bind_RH_RF95_header(py::module &m) {

  using RH_RF95_header = ::gr::lora_sdr::RH_RF95_header;

  py::class_<RH_RF95_header, gr::block, gr::basic_block,
             std::shared_ptr<RH_RF95_header>>(m, "RH_RF95_header",
                                              D(RH_RF95_header))

      .def(py::init(&RH_RF95_header::make), py::arg("_to"), py::arg("_from"),
           py::arg("_id"), py::arg("_flags"), D(RH_RF95_header, make))

      ;
}
