//
//  KomomuComunityViewController.h
//  Komomu
//
//  Created by Guille Uchima on 7/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"


@interface KomomuComunityViewController : UIViewController <EGORefreshTableHeaderDelegate, UITableViewDelegate, UITableViewDataSource> {
	    
    NSMutableDictionary *params;
    
	EGORefreshTableHeaderView *_refreshHeaderView;
	
	//  Reloading var should really be your tableviews datasource
	//  Putting it here for demo purposes 
	BOOL _reloading;
}
@property (nonatomic, retain) NSMutableDictionary *params;


@property (weak, nonatomic) IBOutlet UITableView *table;

@property (strong, nonatomic) NSArray *posts;
- (void)reloadTableViewDataSource;
- (void)doneLoadingTableViewData;
- (void) reloadTableData;
@end
