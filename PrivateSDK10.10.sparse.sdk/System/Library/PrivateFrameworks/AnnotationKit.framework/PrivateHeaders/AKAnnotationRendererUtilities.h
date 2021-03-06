/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AKAnnotationRendererUtilities : NSObject
{
}

+ (struct CGPath *)newStandardStrokedBorderPathWithPath:(struct CGPath *)arg1 withStrokeWidth:(double)arg2;
+ (void)setStandardLineDashInContext:(struct CGContext *)arg1 forLineWidth:(double)arg2;
+ (void)setStandardLineStateInContext:(struct CGContext *)arg1 forLineWidth:(double)arg2;
+ (void)endShadowInContext:(struct CGContext *)arg1;
+ (void)beginShadowInContext:(struct CGContext *)arg1 forAnnotation:(id)arg2;
+ (struct CGRect)outsetRectForShadow:(struct CGRect)arg1 onAnnotation:(id)arg2;
+ (struct CGPoint)_shadowDirectionForAnnotation:(id)arg1;

@end

