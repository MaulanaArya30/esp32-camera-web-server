// Copy this file to secrets.h and fill in your Wi-Fi details.
// secrets.h is gitignored so your credentials never get committed.
#pragma once
#define WIFI_SSID     "your-wifi-name"
#define WIFI_PASSWORD "your-wifi-password"

// Login for the web page (HTTP Basic auth). Replace the value after "Basic "
// with the base64 of "username:password", e.g. `echo -n 'user:pass' | base64`.
#define HTTP_AUTH_HEADER "Basic dXNlcjpwYXNz"
