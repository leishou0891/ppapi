// Copyright (c) 2010 The Native Client Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef PPAPI_PROXY_BROWSER_INSTANCE_H_
#define PPAPI_PROXY_BROWSER_INSTANCE_H_

#include "native_client/src/include/nacl_macros.h"
// Needed because ppp_instance.h does not include everything it needs.
#include "ppapi/c/pp_resource.h"
#include "ppapi/c/pp_var.h"
#include "ppapi/c/ppp_instance.h"

namespace ppapi_proxy {

// Implements the browser end of a proxy pattern for the PPP_Instance interface.
class BrowserInstance {
 public:
  static const PPP_Instance* GetInterface();

 private:
  NACL_DISALLOW_COPY_AND_ASSIGN(BrowserInstance);
};

}  // namespace ppapi_proxy

#endif  // PPAPI_PROXY_BROWSER_INSTANCE_H_
