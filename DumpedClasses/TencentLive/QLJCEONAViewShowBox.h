//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEActionBarInfo, QLJCEBatchData;

@interface QLJCEONAViewShowBox : JceObjectV2
{
    NSArray *jcev2_p_0_o_data__b0x9i_VOQLJCETempletLine;
    QLJCEBatchData *jcev2_p_1_o_batchData;
    NSString *jcev2_p_2_o_reportKey;
    NSString *jcev2_p_3_o_reportParams;
    QLJCEActionBarInfo *jcev2_p_4_o_actionBar;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_actionBar, setter=setJce_actionBar:) QLJCEActionBarInfo *jcev2_p_4_o_actionBar; // @synthesize jcev2_p_4_o_actionBar;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_3_o_reportParams; // @synthesize jcev2_p_3_o_reportParams;
@property(retain, nonatomic, getter=jce_reportKey, setter=setJce_reportKey:) NSString *jcev2_p_2_o_reportKey; // @synthesize jcev2_p_2_o_reportKey;
@property(retain, nonatomic, getter=jce_batchData, setter=setJce_batchData:) QLJCEBatchData *jcev2_p_1_o_batchData; // @synthesize jcev2_p_1_o_batchData;
@property(retain, nonatomic, getter=jce_data, setter=setJce_data:) NSArray *jcev2_p_0_o_data__b0x9i_VOQLJCETempletLine; // @synthesize jcev2_p_0_o_data__b0x9i_VOQLJCETempletLine;
- (void).cxx_destruct;
- (id)init;

@end

