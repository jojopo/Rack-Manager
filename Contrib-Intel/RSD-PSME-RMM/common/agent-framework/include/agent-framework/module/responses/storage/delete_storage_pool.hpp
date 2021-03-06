/*!
 * @copyright
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @file delete_storage_pool.hpp
 */
#pragma once



#include "agent-framework/module/utils/optional_field.hpp"
#include "agent-framework/module/utils/uuid.hpp"
#include "agent-framework/module/model/attributes/oem.hpp"
#include "agent-framework/module/constants/command.hpp"
#include "json-wrapper/json-wrapper.hpp"

#include <string>



namespace agent_framework {
namespace model {
namespace responses {

/*! DeleteStoragePool response */
class DeleteStoragePool {
public:

    /*!
     * brief Get command name
     * @return Command name
     */
    static std::string get_command() {
        return literals::Command::DELETE_STORAGE_POOL;
    }


    /*!
     * @brief Transform request to JSON
     * @return Created JSON value
     */
    json::Json to_json() const;


    /*!
     * @brief Create DeleteVolume from JSON
     * @param[in] json The input argument
     * @return DeleteVolume
     */
    static DeleteStoragePool from_json(const json::Json& json);

};

}
}
}