//
//  ExampleEnt+CoreDataProperties.m
//  GHPodsAndCDAutogenCode
//
//  Created by Gero Herkenrath on 01/12/2016.
//  Copyright © 2016 Gero Herkenrath. All rights reserved.
//  This file was automatically generated and should not be edited.
//

#import "ExampleEnt+CoreDataProperties.h"

@implementation ExampleEnt (CoreDataProperties)

+ (NSFetchRequest<ExampleEnt *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"ExampleEnt"];
}

@dynamic age;
@dynamic favoriteValar;
@dynamic name;
@dynamic uuid;

@end
