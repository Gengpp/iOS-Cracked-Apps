//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

@class UINavigationBar;

@interface DismissableViewController : SSViewControllerBase
{
    UINavigationBar *navBar;
}

@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar;
- (void).cxx_destruct;
- (void)buildNavigationBar;
- (void)cancelAction:(id)arg1;
- (void)cancel;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

