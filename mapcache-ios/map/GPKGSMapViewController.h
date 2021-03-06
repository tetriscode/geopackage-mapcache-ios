//
//  GPKGSMapViewController.h
//  mapcache-ios
//
//  Created by Brian Osborn on 7/13/15.
//  Copyright (c) 2015 NGA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GPKGSMapView.h"
#import "GPKGSDownloadTilesViewController.h"
#import "GPKGSSelectFeatureTableViewController.h"
#import "GPKGSCreateFeatureTilesViewController.h"

@interface GPKGSMapViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate, GPKGSDownloadTilesDelegate, GPKGSSelectFeatureTableDelegate, GPKGSCreateFeatureTilesDelegate>

@property (weak, nonatomic) IBOutlet GPKGSMapView *mapView;
@property (weak, nonatomic) IBOutlet UIButton *boundingBoxButton;
@property (weak, nonatomic) IBOutlet UIButton *featuresButton;
@property (weak, nonatomic) IBOutlet UIButton *downloadTilesButton;
@property (weak, nonatomic) IBOutlet UIButton *featureTilesButton;
@property (weak, nonatomic) IBOutlet UIButton *boundingBoxClearButton;
@property (weak, nonatomic) IBOutlet UIButton *drawPointButton;
@property (weak, nonatomic) IBOutlet UIButton *drawLineButton;
@property (weak, nonatomic) IBOutlet UIButton *drawPolygonButton;
@property (weak, nonatomic) IBOutlet UIButton *editFeaturesConfirmButton;
@property (weak, nonatomic) IBOutlet UIButton *editFeaturesClearButton;
@property (weak, nonatomic) IBOutlet UIButton *drawPolygonHoleButton;
@property (weak, nonatomic) IBOutlet UIButton *editPolygonHoleConfirmButton;
@property (weak, nonatomic) IBOutlet UIButton *editPolygonHoleClearButton;

@end
