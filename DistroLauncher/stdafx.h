//
//    Copyright (C) Microsoft.  All rights reserved.
// Licensed under the terms described in the LICENSE file in the root of this project.
//
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifndef STDAFX_HEADER
#define STDAFX_HEADER

#include "targetver.h"
#include <iostream>
#include <filesystem>
#include <windows.h>
#include <Windows.h>
#include <Wincrypt.h>
#include <tchar.h>
#include <string>
#include <iomanip>
#include <urlmon.h>
#include <wininet.h>
#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <direct.h>
#include <stdlib.h>
#include <conio.h>
#include <io.h>
#include <string>
#include <memory>
#include <assert.h>
#include <locale>
#include <codecvt>
#include <string_view>
#include <vector>
#include <wslapi.h>
#include "WslApiLoader.h"
#include "Helpers.h"
#include "DistributionInfo.h"
#include "DistroLauncher.h"
#include "DistroSpecial.h"
#include "DownloadUserland.h"
#include "ChecksumVerify.h"
#ifdef _UNICODE
#define tcout wcout
#else
#define tcout cout
#endif

// Message strings compiled from .MC file.
#include "messages.h"

namespace fs = std::filesystem;

#endif
