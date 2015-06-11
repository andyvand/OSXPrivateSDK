/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "VideoCaptureProtocol-Protocol.h"

// Not exported
@interface TundraVideoCapture : NSObject <VideoCaptureProtocol>
{
    struct tagHANDLE *_handle;
}

- (int)setFrameRatePercentage:(double)arg1 newFramerate:(int *)arg2;
- (BOOL)cameraSupportsFastFormatSwitching;
- (int)getPreviewFrameCount:(int *)arg1 captureFrameCount:(int *)arg2 reset:(BOOL)arg3;
- (BOOL)isPreviewRunning;
- (int)getCamera:(unsigned int *)arg1;
- (int)setCamera:(unsigned int)arg1;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)stop:(_Bool)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (void)dealloc;
- (id)initWithOptions:(void *)arg1 callback:(void *)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 camera:(unsigned int)arg6 withError:(int *)arg7;

@end
