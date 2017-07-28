//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (TTAdditions)
+ (id)ss_dataWithBase64EncodedString:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (struct __SecKey *)addPrivateKey:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2 error:(id *)arg3;
+ (id)encryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2 error:(id *)arg3;
+ (id)decryptData:(id)arg1 withKeyRef:(struct __SecKey *)arg2 error:(id *)arg3;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (struct __SecKey *)addPublicKey:(id)arg1 error:(id *)arg2;
+ (id)decryptData:(id)arg1 publicKey:(id)arg2 error:(id *)arg3;
- (id)hexadecimalString;
- (id)md5String;
- (id)tt_dataWithFingerprintType:(long long)arg1;
- (id)ss_base64EncodedString;
@end

