/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKCollectionViewDataSource;

@interface GKSearchBar : UISearchBar {
    GKCollectionViewDataSource *_dataSource;
    int _sectionIndex;
}

@property(retain) GKCollectionViewDataSource * dataSource;
@property int sectionIndex;

- (id)dataSource;
- (void)dealloc;
- (int)sectionIndex;
- (void)setDataSource:(id)arg1;
- (void)setSectionIndex:(int)arg1;

@end
