
"use strict";

let SwitchToManual = require('./SwitchToManual.js')
let Hold = require('./Hold.js')
let ClearWaypoints = require('./ClearWaypoints.js')
let InitWaypointsFromFile = require('./InitWaypointsFromFile.js')
let InitRectTrajectory = require('./InitRectTrajectory.js')
let SetSMControllerParams = require('./SetSMControllerParams.js')
let SetPIDParams = require('./SetPIDParams.js')
let ResetController = require('./ResetController.js')
let GoToIncremental = require('./GoToIncremental.js')
let IsRunningTrajectory = require('./IsRunningTrajectory.js')
let SwitchToAutomatic = require('./SwitchToAutomatic.js')
let GetPIDParams = require('./GetPIDParams.js')
let StartTrajectory = require('./StartTrajectory.js')
let AddWaypoint = require('./AddWaypoint.js')
let InitWaypointSet = require('./InitWaypointSet.js')
let SetMBSMControllerParams = require('./SetMBSMControllerParams.js')
let GoTo = require('./GoTo.js')
let InitHelicalTrajectory = require('./InitHelicalTrajectory.js')
let GetSMControllerParams = require('./GetSMControllerParams.js')
let GetWaypoints = require('./GetWaypoints.js')
let GetMBSMControllerParams = require('./GetMBSMControllerParams.js')
let InitCircularTrajectory = require('./InitCircularTrajectory.js')

module.exports = {
  SwitchToManual: SwitchToManual,
  Hold: Hold,
  ClearWaypoints: ClearWaypoints,
  InitWaypointsFromFile: InitWaypointsFromFile,
  InitRectTrajectory: InitRectTrajectory,
  SetSMControllerParams: SetSMControllerParams,
  SetPIDParams: SetPIDParams,
  ResetController: ResetController,
  GoToIncremental: GoToIncremental,
  IsRunningTrajectory: IsRunningTrajectory,
  SwitchToAutomatic: SwitchToAutomatic,
  GetPIDParams: GetPIDParams,
  StartTrajectory: StartTrajectory,
  AddWaypoint: AddWaypoint,
  InitWaypointSet: InitWaypointSet,
  SetMBSMControllerParams: SetMBSMControllerParams,
  GoTo: GoTo,
  InitHelicalTrajectory: InitHelicalTrajectory,
  GetSMControllerParams: GetSMControllerParams,
  GetWaypoints: GetWaypoints,
  GetMBSMControllerParams: GetMBSMControllerParams,
  InitCircularTrajectory: InitCircularTrajectory,
};
