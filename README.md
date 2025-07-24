# LibemaxUtils Titanium Module

[![License](https://img.shields.io/badge/license-Apache%202.0-blue.svg)](LICENSE)

A native Android module for **Titanium SDK** that provides a set of utility functions to access system settings and device information useful in enterprise and security-sensitive apps.

---

## ✨ Features

This module allows your Titanium app to:

- Check if **Airplane Mode** is enabled
- Check if **Automatic Date/Time** is enabled
- Check if **Automatic Time Zone** is enabled
- Detect if **Mock Locations** are enabled
- Detect if **Wi-Fi** is enabled
- Detect if **Mobile Data** is active
- Get the **timestamp of the last best known location**
- Retrieve the **default system time zone**
- **Rotate images** with respect to EXIF orientation
- Retrieve **safe area insets** (especially useful for edge-to-edge displays)

---

## 📦 Installation

Add the module to your `tiapp.xml`:

```xml
<modules>
  <module platform="android">it.libemax.utility</module>
</modules>
```

Then include the module in your code:

```js
const LibemaxUtils = require("it.libemax.utility");
```

## 📚 API Reference

isAirplaneModeOn(): Boolean
Returns true if airplane mode is enabled.

isDataOraAutomatica(): Boolean
Returns true if automatic date/time is enabled in system settings.

isFusoOrarioAutomatico(): Boolean
Returns true if automatic time zone is enabled.

isMockSettingsON(): Boolean
Returns true if mock location providers are active (depends on Android version).

isWiFiOn(): Boolean
Returns true if Wi-Fi is enabled.

isMobileDataOn(): Boolean
Returns true if mobile data is active and SIM is ready.

getLastBestLocation(): Number
Returns the timestamp (in milliseconds) of the most accurate last known location from GPS or Network provider. Returns 0 if not available.

getDefaultTimezone(): String
Returns the system's default time zone ID (e.g. Europe/Rome).

imageWithRotation(blob: TiBlob, options: Object): TiBlob
Rotates the provided image blob. The options can include:

degrees (Number): rotation in degrees (default: 90)

quality (Number): 0 to 1, image quality

format: image format (jpeg or png)

getSafeAreaInsets(): Object
Returns an object with the current safe area insets:

```js
{
  top: Number,
  bottom: Number,
  left: Number,
  right: Number
}
```

## 🧪 Example Usage

```js
if (LibemaxUtils.isAirplaneModeOn()) {
  alert("Airplane Mode is enabled");
}

console.log("Default Timezone:", LibemaxUtils.getDefaultTimezone());

const rotated = LibemaxUtils.imageWithRotation(myBlob, {
  degrees: 90,
  quality: 0.8,
  format: "jpeg",
});
```

## 🔧 Requirements

Android API level: 18+

Titanium SDK: 9.0.0+

Target platform: Android only

## 👤 Author

Developed and maintained by Libemax SRL
https://www.libemax.com
