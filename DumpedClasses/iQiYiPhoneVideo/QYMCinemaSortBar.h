//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYMSortBarCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NotesView, QYCinemaAreaData, QYCinemaBrandData, QYCinemaCharacterTagsData, QYMCinemaSortData, UIButton, UILabel, UITableView;
@protocol QYMCinemaSortBarDelegate;

@interface QYMCinemaSortBar : UIView <UITableViewDataSource, UITableViewDelegate, QYMSortBarCellDelegate>
{
    UIView *_topView;
    UIView *_bottomView;
    UITableView *_tableView;
    long long _currentIndex;
    UIButton *_cityBtn;
    UILabel *_cityLabel;
    _Bool _isFolded;
    _Bool _isFirstClick;
    id <QYMCinemaSortBarDelegate> _delegate;
    UITableView *_superTableView;
    QYMCinemaSortData *_sortData;
    QYCinemaBrandData *_selectedBrand;
    QYCinemaAreaData *_selectedArea;
    QYCinemaCharacterTagsData *_selectedCharacter;
    NSString *_selectedOrderString;
    long long _selectedOrder;
    NSString *_qipuId;
    NSMutableArray *_areaArray;
    NSMutableArray *_brandArray;
    NSMutableArray *_characterArray;
    NSMutableArray *_colorArr;
    NotesView *_notesViewBelow;
}

@property(nonatomic) _Bool isFirstClick; // @synthesize isFirstClick=_isFirstClick;
@property(retain, nonatomic) NotesView *notesViewBelow; // @synthesize notesViewBelow=_notesViewBelow;
@property(retain, nonatomic) NSMutableArray *colorArr; // @synthesize colorArr=_colorArr;
@property(retain, nonatomic) NSMutableArray *characterArray; // @synthesize characterArray=_characterArray;
@property(retain, nonatomic) NSMutableArray *brandArray; // @synthesize brandArray=_brandArray;
@property(retain, nonatomic) NSMutableArray *areaArray; // @synthesize areaArray=_areaArray;
@property(retain, nonatomic) NSString *qipuId; // @synthesize qipuId=_qipuId;
@property(readonly, nonatomic) long long selectedOrder; // @synthesize selectedOrder=_selectedOrder;
@property(readonly, nonatomic) NSString *selectedOrderString; // @synthesize selectedOrderString=_selectedOrderString;
@property(readonly, nonatomic) QYCinemaCharacterTagsData *selectedCharacter; // @synthesize selectedCharacter=_selectedCharacter;
@property(readonly, nonatomic) QYCinemaAreaData *selectedArea; // @synthesize selectedArea=_selectedArea;
@property(readonly, nonatomic) QYCinemaBrandData *selectedBrand; // @synthesize selectedBrand=_selectedBrand;
@property(readonly, nonatomic) _Bool isFolded; // @synthesize isFolded=_isFolded;
@property(retain, nonatomic) QYMCinemaSortData *sortData; // @synthesize sortData=_sortData;
@property(nonatomic) __weak UITableView *superTableView; // @synthesize superTableView=_superTableView;
@property(nonatomic) __weak id <QYMCinemaSortBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hideLoadingBelow;
- (void)showLoadingBelow;
- (void)resetLabelAndImageFrame:(id)arg1 imageView:(id)arg2 index:(long long)arg3;
- (void)sortBarCell:(id)arg1 clickedAtIndex:(long long)arg2 withClickedData:(id)arg3;
- (long long)getCurrentSelectIndexByData:(id)arg1;
- (id)getCurrentArray;
- (void)layoutSubviews;
- (void)foldAtIndex:(long long)arg1;
- (void)unFoldAtIndex:(long long)arg1;
- (void)tapBottom;
- (void)resetTopView;
- (void)labelAndImageColor:(long long)arg1 view:(id)arg2;
- (void)setCurrentIndex:(long long)arg1;
- (void)notifyDelegate:(long long)arg1 changed:(_Bool)arg2;
- (void)notifyDelegate:(long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)cityBtnClicked;
- (void)setCityText;
- (void)initCity;
- (void)initTop;
- (void)initBottom;
- (void)cityChanged;
- (void)fold;
- (void)resetSelect;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

