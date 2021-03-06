//
//  KomomuCommunityInfoCell.h
//  Komomu
//
//  Created by Guille Uchima on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KomomuCommunityInfoCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;


@property (nonatomic, strong) MKNetworkOperation* imageLoadingOperation;
-(void) setTableData:(NSDictionary*) data;

@end
