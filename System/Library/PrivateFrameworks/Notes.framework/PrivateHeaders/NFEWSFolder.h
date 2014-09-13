//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/NFFolder.h>

@class NSString;

@interface NFEWSFolder : NFFolder
{
    BOOL _isUnknownType;
}

+ (id)createFolderWithFolderId:(id)arg1 context:(id)arg2;
+ (id)folderWithFolderId:(id)arg1 context:(id)arg2;
+ (Class)noteClass;
@property(nonatomic) BOOL isUnknownType; // @synthesize isUnknownType=_isUnknownType;
- (id)createNote;
- (void)trimFolderTreeWithParent:(id)arg1;
- (id)newNote;
- (id)newSubfolderWithName:(id)arg1;
- (id)subfolderWithName:(id)arg1;
- (BOOL)isRemote;
- (BOOL)validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (BOOL)validateAccount:(inout id *)arg1 error:(out id *)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *changeKey; // @dynamic changeKey;
@property(retain, nonatomic) NSString *folderId; // @dynamic folderId;
@property(nonatomic) BOOL isDistinguished; // @dynamic isDistinguished;
@property(retain, nonatomic) NFEWSFolder *parent; // @dynamic parent;
@property(retain, nonatomic) NSString *syncState; // @dynamic syncState;

@end
