/*
 * Copyright (c) 2023 Jolla Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MEDIA_BUFFERS_H_
#define MEDIA_BUFFERS_H_

#include <utils/Condition.h>
#include <utils/List.h>

template <typename T>
struct Buffers
{
    android::List<T> buffers;
    android::Condition cond;
    android::Mutex lock;
};

#endif
