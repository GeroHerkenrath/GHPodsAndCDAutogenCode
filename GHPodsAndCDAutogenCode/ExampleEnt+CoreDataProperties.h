//
//  ExampleEnt+CoreDataProperties.h
//  GHPodsAndCDAutogenCode
//
//  Created by Gero Herkenrath on 01/12/2016.
//  Copyright © 2016 Gero Herkenrath. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "ExampleEnt+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface ExampleEnt (CoreDataProperties)

+ (NSFetchRequest<ExampleEnt *> *)fetchRequest;

@property (nonatomic) int16_t age;
@property (nullable, nonatomic, copy) NSString *favoriteValar;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSString *uuid;

@end

NS_ASSUME_NONNULL_END
