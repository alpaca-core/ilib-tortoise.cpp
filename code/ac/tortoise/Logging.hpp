// Copyright (c) Alpaca Core
// SPDX-License-Identifier: MIT
//
#pragma once
#include <ac/jalog/Scope.hpp>
#include <ac/jalog/Log.hpp>

namespace ac::tortoise::log {
extern jalog::Scope scope;
}

#define WHISPER_LOG(lvl, ...) AC_JALOG_SCOPE(::ac::tortoise::log::scope, lvl, __VA_ARGS__)
