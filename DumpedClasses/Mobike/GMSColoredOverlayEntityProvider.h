//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GMSEntityProvider.h"

@class GMSVectorMapSharedResources, NSString;

@interface GMSColoredOverlayEntityProvider : NSObject <GMSEntityProvider>
{
    _Bool _enabled;
    unsigned int _color;
    char *_passID;
    reffed_ptr_329922e5 _behaviorCamera;
    struct EntityRenderer *_renderer;
    struct reffed_ptr<(anonymous namespace)::ColoredOverlayBehavior> _coloredOverlayBehavior;
    GMSVectorMapSharedResources *_sharedResources;
    _Bool _stencilCheck;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateBehaviorAnimated:(_Bool)arg1;
- (void)willDestroyRenderer:(struct EntityRenderer *)arg1;
- (void)didCreateRenderer:(struct EntityRenderer *)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (void)enableOverlay:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithColor:(unsigned int)arg1 passID:(const char **)arg2 stencilCheck:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

