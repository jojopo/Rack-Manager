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
 * */

#include "psme/rest/constants/constants.hpp"
#include "psme/rest/endpoints/metadata_root.hpp"

#include "psme/rest/server/content_types.hpp"
#include "psme/rest/metadata/metadata_manager.hpp"

#include "configuration/configuration.hpp"
#include "logger/logger_factory.hpp"

using namespace psme::rest;
using namespace psme::rest::endpoint;

MetadataRoot::MetadataRoot(const std::string& path) : EndpointBase(path) {}

MetadataRoot::~MetadataRoot() {}

void MetadataRoot::get(const server::Request&, server::Response& res) {
    using MetadataManager = psme::rest::metadata::MetadataManager;
    using namespace psme::rest::server;
    using namespace constants::Metadata;

    res << MetadataManager::get_xml(METADATA_ROOT_FILE);

    res.set_header(ContentType::CONTENT_TYPE, ContentType::XML);
}
