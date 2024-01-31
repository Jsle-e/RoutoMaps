// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "RoutoMaps",
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "RoutoMaps",
            targets: ["RoutoMaps","RoutoMapSDK","MapboxCommon","MapboxCoreMaps","MapboxMaps","Turf"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package, defining a module or a test suite.
        // Targets can depend on other targets in this package and products from dependencies.
        .target(
            name: "RoutoMaps"),
        .testTarget(
            name: "RoutoMapsTests",
            dependencies: ["RoutoMaps"]),
        .binaryTarget(
            name: "RoutoMapSDK",
            path: "Artifacts/RoutoMapSDK.xcframework"
        ),
        .binaryTarget(
            name: "MapboxCommon",
            path: "Artifacts/MapboxCommon.xcframework"
        ),
        .binaryTarget(
            name: "MapboxCoreMaps",
            path: "Artifacts/MapboxCoreMaps.xcframework"
        ),
        .binaryTarget(
            name: "MapboxMaps",
            path: "Artifacts/MapboxMaps.xcframework"
        ),
        .binaryTarget(
            name: "Turf",
            path: "Artifacts/Turf.xcframework"
        )
    ]
)
