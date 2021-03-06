//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISDialog, SUClientInterface, SUPreviewOverlayViewController, SUScriptInterface, SUTabBarController;

@protocol SUClientInterfaceDelegate <NSObject>

@optional
- (SUTabBarController *)tabBarControllerForClientInterface:(SUClientInterface *)arg1;
- (SUScriptInterface *)scriptInterfaceForClientInterface:(SUClientInterface *)arg1;
- (SUPreviewOverlayViewController *)previewOverlayForClientInterface:(SUClientInterface *)arg1;
- (void)returnToLibraryForClientInterface:(SUClientInterface *)arg1;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarStyle:(int)arg2 animated:(BOOL)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(int)arg3;
- (void)clientInterface:(SUClientInterface *)arg1 showPreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 hidePreviewOverlayAnimated:(BOOL)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 presentDialog:(ISDialog *)arg2;
- (void)clientInterface:(SUClientInterface *)arg1 exitStoreWithReason:(int)arg2;
@end

