#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class Sound;
@class Dock;
@class Notice;
@class Path;
@class App;
@class Window;
@class Clipboard;

@class WindowController;

@interface WebViewDelegate : NSObject {
	Sound* sound;
    Dock* dock;
    Notice* notice;
    Path* path;
    App* app;
    Window* window;
    Clipboard* clipboard;
}



@property (nonatomic, retain) Sound* sound;
@property (nonatomic, retain) Dock* dock;
@property (nonatomic, retain) Notice* notice;
@property (nonatomic, retain) Path* path;
@property (nonatomic, retain) App* app;
@property (nonatomic, retain) Window* window;
@property (nonatomic, retain) Clipboard* clipboard;

@property (nonatomic, retain) WindowController *requestedWindow;

@end
