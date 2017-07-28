//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTIMChatDao : NSObject
{
    NSString *_insertSql;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *insertSql; // @synthesize insertSql=_insertSql;
- (void).cxx_destruct;
- (_Bool)shrink:(id)arg1 limit:(long long)arg2 withDB:(id)arg3;
- (id)queryMsg:(id)arg1 offsetMid:(long long)arg2 offsetCid:(long long)arg3 limit:(long long)arg4 withDB:(id)arg5;
- (id)queryMsg:(id)arg1 limit:(long long)arg2 withDB:(id)arg3;
- (id)querySvrMsg:(id)arg1 svrMsgId:(long long)arg2 withDB:(id)arg3;
- (id)queryLastSvrMsg:(id)arg1 withDB:(id)arg2;
- (id)queryLstMsg:(id)arg1 isContainNotDelete:(_Bool)arg2 withDB:(id)arg3;
- (id)queryLstMsg:(id)arg1 withDB:(id)arg2;
- (int)queryUnreadCount:(id)arg1 withDB:(id)arg2;
- (_Bool)markMsgReaded:(id)arg1 withDB:(id)arg2;
- (void)markSendingMsgFail:(id)arg1 withDB:(id)arg2;
- (_Bool)markMsgReaded:(id)arg1 lastCID:(long long)arg2 withDB:(id)arg3;
- (_Bool)markAllReaded:(id)arg1 withDB:(id)arg2;
- (void)update:(id)arg1 msg:(id)arg2 withDB:(id)arg3;
- (_Bool)deleteMsg:(id)arg1 withDB:(id)arg2;
- (_Bool)deleteMsgTable:(id)arg1 withDB:(id)arg2;
- (_Bool)markAllMsgDeleted:(id)arg1 withDB:(id)arg2;
- (_Bool)updateState:(id)arg1 cid:(long long)arg2 mid:(long long)arg3 status:(int)arg4 ocid:(long long)arg5 withDB:(id)arg6;
- (id)generateInsertSql:(id)arg1;
- (long long)insertOrUpdate:(id)arg1 msgs:(id)arg2 withDB:(id)arg3;

@end

