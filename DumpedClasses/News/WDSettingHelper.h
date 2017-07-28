//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Singleton.h"

@class NSDictionary, NSString;

@interface WDSettingHelper : NSObject <Singleton>
{
    NSDictionary *_settingDict;
    long long _listAnswerHasImgTextMaxLineCount;
}

+ (id)defaultWendaDetailURLHosts;
+ (id)wendaDetailURLHosts;
+ (void)saveWenDaDetailUrlHosts:(id)arg1;
+ (id)savedWendaInfoDict;
+ (void)saveWendaAppInfoDict:(id)arg1;
@property(nonatomic) long long listAnswerHasImgTextMaxLineCount; // @synthesize listAnswerHasImgTextMaxLineCount=_listAnswerHasImgTextMaxLineCount;
@property(retain, nonatomic) NSDictionary *settingDict; // @synthesize settingDict=_settingDict;
- (void).cxx_destruct;
- (_Bool)wdDetailNewPushDisabled;
- (_Bool)wdDetailShowMode;
- (id)postQuestionTagPlaceHolder;
- (_Bool)isDescRequired;
- (long long)minQuestionDescCharaterNumber;
- (long long)maxQuestionDescCharaterNumber;
- (id)postQuestionDescPlaceHolder;
- (id)wendaPostQuestionHintSchema;
- (id)wendaPostQuestionHintTitle;
- (long long)minQuestionTitleCharaterNumber;
- (long long)maxQuestionTitleCharaterNumber;
- (id)wendaPostQuestionPlaceHolder;
- (id)wendaPostFirstHintArray;
- (id)wendaCategoryPlaceHolder;
- (_Bool)isPostAnswerVideo;
- (_Bool)isQuestionShowPicture;
- (_Bool)isWenSwithOpen;
- (id)wendaQuestionReportSetting;
- (id)wendaAnswerReportSetting;
- (id)minAnswerLengthText;
- (_Bool)showForwardPGC;
- (id)listMoreAnswerCountText;
- (id)postAnswerPlaceholder;
- (id)listSendAnswerButtonTitleText;
- (id)listQuestionHeaderAnswerCountText;
- (id)listSectionTitleText;
- (long long)minAnswerTextLength;
- (long long)listAnswerHasImgTextMaxCount;
- (long long)moreListAnswerTextMaxCount;
- (long long)listCellContntMaxLine;
- (double)pageStayErrorTime;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

