//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MailCore/MCSaslClient.h>

@interface _MCExternalSaslClient : MCSaslClient
{
}

- (id)newDecryptedDataForBytes:(const char *)arg1 length:(unsigned int)arg2;
- (id)newEncryptedDataForBytes:(const char *)arg1 length:(unsigned int)arg2;
- (id)responseForServerData:(id)arg1;
- (id)initialResponse;
- (id)init;
- (id)initWithMechanismName:(id)arg1 account:(id)arg2;

@end
