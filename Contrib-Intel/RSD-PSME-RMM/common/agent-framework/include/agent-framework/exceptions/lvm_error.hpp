/*!
 * @copyright
 * Copyright (c) 2015-2019 Intel Corporation
 *
 * @copyright
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * @copyright
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * @copyright
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *
 * @file lvm_error.hpp
 *
 * @brief Declaration of Lvm error interface
 * */

#pragma once



#include "agent-framework/exceptions/gami_exception.hpp"



namespace agent_framework {
namespace exceptions {

/*! @brief Lvm error exception class */
class LvmError final : public GamiException {
public:

    /*!
     * @brief Constructor
     *
     * @param[in] msg Error message
     */
    explicit LvmError(const std::string& msg) :
        GamiException(ErrorCode::LVM, msg) {}


    LvmError(const LvmError&) = default;


    LvmError& operator=(const LvmError&) = default;


    LvmError(LvmError&&) = default;


    LvmError& operator=(LvmError&&) = default;


    /*! @brief Destructor */
    ~LvmError();
};

} // namespace exceptions
} // namespace agent_framework

