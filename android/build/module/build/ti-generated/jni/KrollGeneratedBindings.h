/**
 * Titanium SDK SDK
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 * Warning: This file is GENERATED, and should not be modified
 */
#include <unordered_map>
#include <KrollBindings.h>

#include "it.libemax.utility.ExampleProxy.h"
#include "it.libemax.utility.LibemaxUtilsModule.h"


namespace titanium {
	namespace bindings {

		struct Hash {
			// FNV-1a hashing algorithm
			// http://www.isthe.com/chongo/tech/comp/fnv/index.html#FNV-1a
			std::size_t operator()(const char* name) const {
				std::size_t length = strlen(name);
				std::size_t hash = 0x811C9DC5;
				for (std::size_t i = 0; i < length; ++i) {
					hash ^= name[i];
					hash += (hash << 24) + (hash << 8) + (hash << 7) + (hash << 4) + (hash << 1);
				}
				return hash;
			}
		};

		struct Compare {
			bool operator()(const char* a, const char* b) const {
				return !strcmp(a, b);
			}
		};

		class TiModuleBindings {
			public:
				static BindEntry* lookupGeneratedInit(const char*, unsigned int);
		};

		BindEntry* TiModuleBindings::lookupGeneratedInit(const char* name, unsigned int length) {
			static BindEntry binds[] = {
				{"it.libemax.utility.LibemaxUtilsModule", ::it::libemax::utility::LibemaxUtilsModule::bindProxy, ::it::libemax::utility::LibemaxUtilsModule::dispose},
				{"it.libemax.utility.ExampleProxy", ::it::libemax::utility::libemaxutils::ExampleProxy::bindProxy, ::it::libemax::utility::libemaxutils::ExampleProxy::dispose}
			};
			static std::unordered_map<const char*, BindEntry&, Hash, Compare> map = {
				{binds[0].name, binds[0]},
				{binds[1].name, binds[1]}
			};

			auto result = map.find(name);
			while (result != map.end()) {
				// fallback in case of very unlikely collision
				if (!strcmp(name, result->second.name)) {
					return &result->second;
				}
				result++;
			}
			return nullptr;
		}
	}
}
