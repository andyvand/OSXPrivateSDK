//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MCObject.h>

@class MCAssetAudio, MCAudioPlaylist, MCSlide;

@interface MCSong : MCObject
{
    BOOL mStartTimeIsDefined;
    BOOL mDurationIsDefined;
    float mVolume;
    MCAssetAudio *mAsset;
    double mFadeInDuration;
    double mFadeOutDuration;
    unsigned long long mIndex;
    double mStartTime;
    double mDuration;
    MCAudioPlaylist *mAudioPlaylistIfAudioPlaylistSong;
    MCSlide *mSlideIfSlideSong;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property MCSlide *slideIfSlideSong; // @synthesize slideIfSlideSong=mSlideIfSlideSong;
@property MCAudioPlaylist *audioPlaylistIfAudioPlaylistSong; // @synthesize audioPlaylistIfAudioPlaylistSong=mAudioPlaylistIfAudioPlaylistSong;
@property(readonly, nonatomic) BOOL durationIsDefined; // @synthesize durationIsDefined=mDurationIsDefined;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
@property(readonly, nonatomic) BOOL startTimeIsDefined; // @synthesize startTimeIsDefined=mStartTimeIsDefined;
@property(nonatomic) double startTime; // @synthesize startTime=mStartTime;
@property(nonatomic) unsigned long long index; // @synthesize index=mIndex;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=mFadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=mFadeInDuration;
@property(nonatomic) float volume; // @synthesize volume=mVolume;
- (void)_copySelfToSnapshot:(id)arg1;
- (void)undefineDuration;
- (void)undefineStartTime;
@property(retain) MCAssetAudio *asset; // @synthesize asset=mAsset;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;

@end
