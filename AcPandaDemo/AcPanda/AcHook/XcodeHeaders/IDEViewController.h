//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

//#import "DVTStatefulObject.h"
//#import "IDESelectionSource.h"

@class DVTStateToken, IDESelection, IDEWorkspace, IDEWorkspaceDocument, IDEWorkspaceTabController, NSString;

//@interface IDEViewController : DVTViewController <IDESelectionSource, DVTStatefulObject>
@interface IDEViewController : DVTViewController
{
//    id <IDEWorkspaceDocumentProvider> _workspaceDocumentProvider;
    IDEWorkspaceTabController *_workspaceTabController;
    IDESelection *_outputSelection;
    DVTStateToken *_stateToken;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (id)keyPathsForValuesAffectingWorkspaceDocument;
+ (long long)version;
////- (void).cxx_destruct;
- (void)_invalidateSubViewControllersForView:(id)arg1;
- (BOOL)_knowsAboutInstalledState;
- (void)_resolveWorkspaceDocumentProvider;
- (void)_resolveWorkspaceTabController;
@property(readonly) BOOL automaticallyInvalidatesChildViewControllers;
- (void)commitState;
- (void)commitStateToDictionary:(id)arg1;
@property(readonly, copy) IDESelection *contextMenuSelection;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(copy) IDESelection *outputSelection; // @synthesize outputSelection=_outputSelection;
- (void)primitiveInvalidate;
- (void)revertState;
- (void)revertStateWithDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
//@property(readonly) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (void)viewDidInstall;
@property(readonly) IDEWorkspace *workspace;
@property(readonly) IDEWorkspaceDocument *workspaceDocument;
- (id)workspaceDocumentProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

