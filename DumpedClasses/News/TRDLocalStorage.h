//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSString;

@interface TRDLocalStorage : NSObject
{
    _Bool _lossyEncoding;
    unsigned char _version;
    NSString *_curLogFile;
    NSFileHandle *_fileHandle;
    unsigned long long _encoding;
    long long _maxSize;
    long long _fileCount;
    NSString *_logFileStorePath;
    NSString *_logPrefix;
    NSString *_logSuffix;
    NSString *_appKey;
    long long _curSize;
}

@property(nonatomic) long long curSize; // @synthesize curSize=_curSize;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *logSuffix; // @synthesize logSuffix=_logSuffix;
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(retain, nonatomic) NSString *logFileStorePath; // @synthesize logFileStorePath=_logFileStorePath;
@property(nonatomic) long long fileCount; // @synthesize fileCount=_fileCount;
@property(nonatomic) long long maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(nonatomic) _Bool lossyEncoding; // @synthesize lossyEncoding=_lossyEncoding;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(retain, nonatomic) NSString *curLogFile; // @synthesize curLogFile=_curLogFile;
- (void).cxx_destruct;
- (void)deleteLogFiles;
- (void)write:(id)arg1;
- (void)close;
- (id)open;
- (void)deleteNotUserLogFile;
- (void)deleteOutDateLogFile:(id)arg1;
- (void)deleteCurrentLogFile;
- (void)deleteLogFile:(id)arg1;
- (void)deleteVersionNotMatchFile:(id)arg1;
- (void)handleVaildLogFile;
- (id)currentLogFile;
- (id)logFilesWithPrefix:(id)arg1;
- (id)logFileMagicNumber:(id)arg1;
- (unsigned char)logFileVersion:(id)arg1;
- (id)logFileHeaderDesc:(id)arg1 andLogVersion:(unsigned char)arg2;
- (id)logFileName:(id)arg1 andSuffix:(id)arg2;
- (void)dealloc;
- (id)initWithMaxSize:(long long)arg1 andStorePath:(id)arg2 andAppKey:(id)arg3 andLogVersion:(unsigned char)arg4 andPrefix:(id)arg5 andSuffix:(id)arg6 andLogFileCount:(long long)arg7;

@end

