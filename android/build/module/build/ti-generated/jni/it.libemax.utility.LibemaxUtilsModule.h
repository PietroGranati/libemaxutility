/**
 * Titanium SDK
 * Copyright TiDev, Inc. 04/07/2022-Present
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include "Proxy.h"

namespace it {
namespace libemax {
namespace utility {

class LibemaxUtilsModule : public titanium::Proxy
{
public:
	explicit LibemaxUtilsModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;
	static v8::Persistent<v8::Object> moduleInstance;

	// Methods -----------------------------------------------------------
	static void isMobileDataOn(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getLastBestLocation(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isAirplaneModeOn(const v8::FunctionCallbackInfo<v8::Value>&);
	static void imageWithRotation(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isFusoOrarioAutomatico(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isWiFiOn(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isDataOraAutomatica(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isMockSettingsON(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDefaultTimezone(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getSafeAreaInsets(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

} // utility
} // libemax
} // it
