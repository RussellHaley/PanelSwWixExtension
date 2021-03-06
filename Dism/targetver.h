#pragma once

#ifndef WINVER                  // Specifies that the minimum required platform is Windows 2000.
#define WINVER _WIN32_WINNT_WIN7           // Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT            // Specifies that the minimum required platform is Windows 2000.
#define _WIN32_WINNT _WIN32_WINNT_WIN7     // Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_IE               // Specifies that the minimum required platform is Internet Explorer 5.0.
#define _WIN32_IE _WIN32_WINNT_WIN7        // Change this to the appropriate value to target other versions of IE.
#endif

#ifndef _WIN32_MSI              // Specifies that the minimum required MSI version is MSI 3.1
#define _WIN32_MSI 310          // Change this to the appropriate value to target other versions of MSI.
#endif
