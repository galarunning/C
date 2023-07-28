
/*Simple Program written in C that 
does not do much but was good 
practice for windows pop-ups*/

#include <Windows.h>

// Window procedure for the main window
LRESULT CALLBACK MainWindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_CREATE:
            // Create buttons
            CreateWindow("BUTTON", "Open Window 1", WS_VISIBLE | WS_CHILD, 50, 50, 150, 30, hwnd, (HMENU)1, NULL, NULL);
            CreateWindow("BUTTON", "Open Window 2", WS_VISIBLE | WS_CHILD, 50, 100, 150, 30, hwnd, (HMENU)2, NULL, NULL);
            return 0;
        
        case WM_COMMAND:
            // Handle button clicks
            switch (LOWORD(wParam)) {
                case 1: // Button "Open Window 1"
                    MessageBox(hwnd, "This is Window 1!", "Window 1", MB_OK | MB_ICONINFORMATION);
                    break;
                    
                case 2: // Button "Open Window 2"
                    MessageBox(hwnd, "This is Window 2!", "Window 2", MB_OK | MB_ICONINFORMATION);
                    break;
            }
            return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

// Entry point of the application
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Register the window class
    const char* CLASS_NAME = "SampleAppClass";
    WNDCLASS wc = {0};
    wc.lpfnWndProc = MainWindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;
    RegisterClass(&wc);

    // Create the main window
    HWND hwnd = CreateWindow(CLASS_NAME, "Sample Windows App", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 300, 200, NULL, NULL, hInstance, NULL);
    if (hwnd == NULL) {
        return 0;
    }

    // Show the main window
    ShowWindow(hwnd, nCmdShow);

    // Run the message loop
    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}
