from flask import Blueprint
from Server.Server_Constants.server_responses import Server_Reponses

offensive_security = Blueprint('offensive_security', __name__)


@offensive_security.route('/offensive_security/code_execution/')
def get_offense_code_execution():
    return Server_Reponses.CODE_EXECUTION_COMPLETED_200, 200
