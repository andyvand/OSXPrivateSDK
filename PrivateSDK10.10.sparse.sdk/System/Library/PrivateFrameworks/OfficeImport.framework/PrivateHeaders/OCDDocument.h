/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableArray, OADBlipCollection, OADGraphicStyleCache, OADTextListStyle, OCDReader, OCDSummary, OCDWriter, OITSUPointerKeyDictionary;

// Not exported
@interface OCDDocument : NSObject
{
    OCDReader *mReader;
    OCDWriter *mWriter;
    OCDSummary *mSummary;
    OADBlipCollection *mBlips;
    NSMutableArray *mCharts;
    OITSUPointerKeyDictionary *mDualDrawableMap;
    OADTextListStyle *mDefaultTextStyle;
    OADGraphicStyleCache *mGraphicStyleCache;
    NSData *mEncryptionInfo;
}

@property(retain, nonatomic) OADGraphicStyleCache *graphicStyleCache; // @synthesize graphicStyleCache=mGraphicStyleCache;
@property(readonly, nonatomic) OADTextListStyle *defaultTextStyle; // @synthesize defaultTextStyle=mDefaultTextStyle;
@property(readonly, nonatomic) OITSUPointerKeyDictionary *dualDrawableMap; // @synthesize dualDrawableMap=mDualDrawableMap;
@property(readonly, nonatomic) NSMutableArray *charts; // @synthesize charts=mCharts;
@property(readonly, nonatomic) OADBlipCollection *blips; // @synthesize blips=mBlips;
@property(readonly, nonatomic) OCDSummary *summary; // @synthesize summary=mSummary;
@property(retain, nonatomic) OCDWriter *writer; // @synthesize writer=mWriter;
@property(retain, nonatomic) OCDReader *reader; // @synthesize reader=mReader;
- (void)setEncryptionInfo:(id)arg1;
- (id)encryptionInfo;
- (_Bool)isFromBinaryFile;
- (void)dealloc;
- (id)init;

@end
