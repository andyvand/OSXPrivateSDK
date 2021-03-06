/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PKDistribution, SUProduct;

@interface SUManualProductAdopterImpl : NSObject
{
    NSString *_archivePath;
    PKDistribution *_distribution;
    SUProduct *_adoptedProduct;
}

- (id)adoptedProduct;
- (void)_mungePackageURLsUnderChoice:(id)arg1;
- (BOOL)_mungeDistributionWithDisplayName:(id)arg1 displayVersion:(id)arg2 error:(id *)arg3;
- (BOOL)adoptWithDisplayName:(id)arg1 displayVersion:(id)arg2 allowDevSigning:(BOOL)arg3 error:(id *)arg4;
- (id)_pathByCopyingProductArchiveFromFileHandle:(id)arg1 archiveName:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithManualProductArchiveNamed:(id)arg1 readingFromFileHandle:(id)arg2 error:(id *)arg3;

@end

