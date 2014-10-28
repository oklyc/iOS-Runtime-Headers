/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUISearchFieldDelegate>, NSOperationQueue, NSString, SKUIClientContext, SKUICompletionList, SKUISearchBar, SKUISearchDisplayController, SSVLoadURLOperation, UISearchBar, UIViewController;

@interface SKUISearchFieldController : NSObject <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate> {
    NSString *_baseHintsURLString;
    SKUIClientContext *_clientContext;
    SKUICompletionList *_completionList;
    <SKUISearchFieldDelegate> *_delegate;
    SSVLoadURLOperation *_loadOperation;
    int _numberOfSearchResults;
    NSOperationQueue *_operationQueue;
    SKUISearchBar *_searchBar;
    NSString *_searchBarAccessoryText;
    SKUISearchDisplayController *_searchDisplayController;
    NSString *_trendingSearchURLString;
}

@property(retain) SKUIClientContext * clientContext;
@property(readonly) UIViewController * contentsController;
@property(copy,readonly) NSString * debugDescription;
@property <SKUISearchFieldDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property BOOL displaysSearchBarInNavigationBar;
@property(readonly) unsigned int hash;
@property int numberOfSearchResults;
@property(readonly) UISearchBar * searchBar;
@property(copy) NSString * searchBarAccessoryText;
@property(copy) NSString * searchHintsURLString;
@property BOOL showsResultsForEmptyField;
@property(readonly) Class superclass;
@property(copy) NSString * trendingSearchURLString;

- (void).cxx_destruct;
- (id)URLForTrendingSearchPageView:(id)arg1;
- (void)_adjustInsetsForResultsTableView:(id)arg1;
- (void)_loadResultsForSearchRequest:(id)arg1;
- (void)_reloadData;
- (void)_reloadTrendingVisibility;
- (Class)_resultsTableViewClass;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (id)clientContext;
- (id)contentsController;
- (void)dealloc;
- (id)delegate;
- (BOOL)displaysSearchBarInNavigationBar;
- (id)initWithContentsController:(id)arg1;
- (int)numberOfSearchResults;
- (void)resignActive:(BOOL)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (id)searchBarAccessoryText;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginTouches:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (id)searchHintsURLString;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(BOOL)arg1;
- (void)setNumberOfSearchResults:(int)arg1;
- (void)setSearchBarAccessoryText:(id)arg1;
- (void)setSearchHintsURLString:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setShowsResultsForEmptyField:(BOOL)arg1;
- (void)setTrendingSearchURLString:(id)arg1;
- (BOOL)showsResultsForEmptyField;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2;
- (id)trendingSearchURLString;

@end
