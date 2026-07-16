#ifndef MY_OPENSSL_CONF_H
#define MY_OPENSSL_CONF_H

#ifdef __APPLE__
#include <TargetConditionals.h>
#endif // __APPLE__

#if defined(_MSC_VER) && defined(_M_IX86)
#include "Win32/configuration.h"
#elif defined(_MSC_VER) && defined(_M_X64)
#include "Win64/configuration.h"
#elif defined(_MSC_VER) && defined(_M_ARM64)
#include "Win64Arm/configuration.h"
#elif defined(__linux__)
#include "linux-x86_64/configuration.h"
#elif defined(__APPLE__) && TARGET_OS_OSX == 1 && defined(__x86_64__)
#include "macos-x86_64/configuration.h"
#elif defined(__APPLE__) && TARGET_OS_OSX == 1 && defined(__aarch64__)
#include "macos-arm64/configuration.h"
#elif defined(__APPLE__) && TARGET_OS_IOS == 1 && TARGET_OS_SIMULATOR == 1 && defined(__x86_64__)
#include "iossim-x86_64/configuration.h"
#elif defined(__APPLE__) && TARGET_OS_IOS == 1 && TARGET_OS_SIMULATOR == 1 && defined(__aarch64__)
#include "iossim-arm64/configuration.h"
#elif defined(__APPLE__) && TARGET_OS_IOS == 1
#include "ios-arm64/configuration.h"
#elif defined(__ANDROID__) && defined(__arm__)
#include "android-arm/configuration.h"
#elif defined(__ANDROID__) && defined(__aarch64__)
#include "android-arm64/configuration.h"
#elif defined(__ANDROID__) && defined(__x86_64__)
#include "android-x86_64/configuration.h"
#else
#error Unsupported architecture
#endif

#endif // MY_OPENSSL_CONF_H